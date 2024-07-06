```Python
def find_closest_elements():
    num_list = input("Enter numbers separated by space: ").split()
    num_list = [int(num) for num in num_list]
    k = int(input("Enter the number of closest elements to find: "))

    if k > len(num_list):
        print("Closest pair of elements are: ", (num_list[0], num_list[-1]))
    else:
        num_list.sort()

        target = int(input("Enter a target number to find closest elements: "))
        
        left, right = 0, len(num_list) - k
        if abs(target - num_list[left]) <= abs(target - num_list[right]):
            closest_pair = num_list[left:left+k]
        else:
            closest_pair = num_list[right-k:right+1]

        print(
            "The {} closest elements to {} are: {}".format(
                k, target, tuple(closest_pair)
            )
        )


find_closest_elements()