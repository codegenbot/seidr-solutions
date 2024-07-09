```
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

    result = sum((x**2 if i % 3 == 0 and (i + 1) < len(lst) or (i + 2) < len(lst) else 
                  x**3 if i % 4 == 0 and (i + 2) < len(lst) else 
                  x for i, x in enumerate(lst)) or [0])

    return result

print(sum_squares())