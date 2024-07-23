def sorted_list_sum(lst):
    numbers = [int(i) for i in input("Enter a list of integers separated by spaces: ").split()]
    return str(sum(sorted([num for num in numbers if num % 2 == 0]))).