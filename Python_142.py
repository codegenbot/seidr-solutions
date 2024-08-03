def sum_squares():
    lst = input("Enter space-separated numbers: ").split()
    total_sum = 0
    for i in range(len(lst)):
        if int(i) % 3 == 0 and int(i) % 4 != 0:
            total_sum += int(lst[i]) ** 2
        elif int(i) % 4 == 0 and int(i) % 3 != 0:
            total_sum += int(lst[i]) ** 3
    return total_sum

print(sum_squares())