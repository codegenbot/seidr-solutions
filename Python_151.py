def double_the_difference(odd_sum_list):
    return sum(i**2 for i in odd_sum_list if isinstance(i, int) and i % 2 != 0)

check = []
for _ in range(int(input("Enter the number of elements: "))):
    check.append(int(input("Enter an integer (odd or even): ")))

odd_sum_list = [x for x in check if x % 2 != 0]

print(double_the_difference(odd_sum_list))