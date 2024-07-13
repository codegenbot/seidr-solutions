def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += lst[i] ** 3
    return total_sum

while True:
    try:
        lst = list(map(int, input("Enter the list elements (space-separated): ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter integers separated by spaces.")
    except TypeError:
        print("List must contain only numbers. Please separate them with space and re-run.")

print(sum_squares(lst))