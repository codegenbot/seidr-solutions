```
def sum_squares():
    total = 0
    while True:
        try:
            lst = list(map(int, input("Enter numbers separated by space: ").split()))
            if not lst:
                print("No numbers entered. Please enter some.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    for num in lst:
        if (num % 3 == 0 and (num + 1) % 4 != 0):
            total += num ** 2
        elif (num % 4 == 0 and (num + 2) % 3 != 0):
            total += num ** 3
        else:
            total += num

    return total

print(sum_squares())