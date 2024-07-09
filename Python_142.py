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

    result = sum(
        (x**2 for x in lst)
        if all(i % 3 == 0 or i % 4 != 0 for i, _ in enumerate(lst))
        else sum((x if i % 2 == 0 else -x for i, x in enumerate(lst)))
    )

    return result


print(sum_squares())