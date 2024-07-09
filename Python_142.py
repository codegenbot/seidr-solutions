```
def sum_squares():
    while True:
        try:
            lst = list(map(int, input("Enter numbers separated by space: ").split()))
            if len(lst) < 2 or any(x <= 0 for x in lst):
                print("Invalid input. Please enter at least two positive integers.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    result = sum((x**2 if i % 3 == 0 and i < len(lst) - 1 and (i + 1) % 4 != 0 else 
                  x**3 if i % 4 == 0 and i < len(lst) - 2 and (i + 2) % 3 != 0 else 
                  x for i, x in enumerate(lst)) or [0])

    return result

print(sum_squares())