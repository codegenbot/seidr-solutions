def sum_squares():
    while True:
        try:
            lst = list(map(int, input("Enter numbers separated by space: ").split()))
            if not lst:
                print("No numbers entered. Please enter some.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    result = sum((x**2 for x in lst) if len(lst) % 3 == 0 else (x**2 for x in lst[1::3]) if len(lst) % 4 == 0 else sum(x for x in lst))

    return result

print(sum_squares())