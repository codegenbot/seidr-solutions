def find_odd_sum(lst):
    odd_sum = 0
    for num in lst:
        if num % 2 != 0:
            odd_sum += num
    return odd_sum

numbers = list(map(int, input("Enter numbers (space-separated): ").split()))
print(find_odd_sum(numbers))