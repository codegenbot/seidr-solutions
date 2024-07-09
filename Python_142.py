```
def sum_squares():
    while True:
        try:
            lst = list(map(int, input("Enter numbers separated by space: ").split()))
            if len(lst) > 0:
                break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    result = sum(
        (
            x**2 if i % 3 != 0 else x**3 if i % 4 != 0 else x
        )
        for i, x in enumerate(lst)
    )

    return str(result)


print("The final result is: ", sum_squares())