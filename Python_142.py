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

    result = sum(x**2 for i, x in enumerate(lst) if (i+1)%3==0 or (i+2)%4==0)

    return result

print(sum_squares())