def sum_squares(lst):
    total = 0
    even_sum = 0
    odd_sum = 0
    for num in lst:
        if num % 2 == 0:
            even_sum += num ** 2
        else:
            odd_sum += num ** 3
    return even_sum + odd_sum

lst = list(map(int, input("Enter numbers separated by space: ").split()))
print(sum_squares(lst))