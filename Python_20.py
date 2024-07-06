```python
def find_closest_elements():
    num_list = input("Enter numbers separated by space: ").split()
    num_list = [int(num) for num in num_list]
    num_list.sort()

    closest_pair_diff = float('inf')
    closest_pair = (0, 0)

    for i in range(len(num_list) - 1):
        pair_diff = num_list[i+1] - num_list[i]
        if pair_diff < closest_pair_diff:
            closest_pair_diff = pair_diff
            closest_pair = (num_list[i], num_list[i+1])

    print("Closest pair of elements are: ", closest_pair)

find_closest_elements()