```
def find_closest_elements():
    num_list = input("Enter numbers separated by space: ").split()
    num_list = [int(num) for num in num_list]
    num_list.sort()

    target = int(input("Enter a target number to find closest elements: "))

    k = int(input("Enter the number of closest elements to find: "))

    if k > len(num_list):
        print("Closest pair of elements are: ", (num_list[0], num_list[-1]))
    else:
        left, right = 0, len(num_list) - k
        closest_pair = num_list[left:right+1]

        min_diff = abs(target - num_list[0])
        for i in range(left, right+1):
            if abs(target - num_list[i]) < min_diff:
                min_diff = abs(target - num_list[i])
                closest_pair = num_list[i-k+1:i+1]

        print("The {} closest elements to {} are: {}".format(k, target, tuple(closest_pair)))


find_closest_elements()