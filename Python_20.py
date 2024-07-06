```
def find_closest_elements():
    num_list = input("Enter numbers separated by space: ").split()
    num_list = [int(num) for num in num_list]
    num_list.sort()
    avg = sum(num_list) / len(num_list)
    closest_diff = float('inf')
    closest_pairs = []
    
    for i in range(len(num_list)):
        if abs(num_list[i] - avg) < closest_diff:
            closest_diff = abs(num_list[i] - avg)
            closest_pairs = [(num_list[i], num_list[(i+1)%len(num_list)])]
        elif abs(num_list[i] - avg) == closest_diff:
            closest_pairs.append((num_list[i], num_list[(i+1)%len(num_list)]))
    
    print("The {} closest elements are: {}".format(len(closest_pairs), tuple(map(lambda x: str(x[0]) + ' and ' + str(x[1]), closest_pairs))))

find_closest_elements()