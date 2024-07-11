```Python
def sum_squares(lst):
    even_total_sum = 0
    odd_total_sum = 0
    for num in lst:
        if num % 2 == 0:
            even_total_sum += num ** 2
        else:
            odd_total_sum += num ** 3
    return even_total_sum + odd_total_sum

input_list = list(map(int, input("Enter numbers separated by space: ").split()))
print(sum_squares(input_list))