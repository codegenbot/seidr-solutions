input_list = list(map(int, input().split()))
total_sum = 0
for i in range(0, 16):
    if i % 2 == 1:
        double_digit = input_list[i] * 2
        if double_digit > 9:
            total_sum += double_digit - 9
        else:
            total_sum += double_digit
    else:
        total_sum += input_list[i]
print(total_sum)