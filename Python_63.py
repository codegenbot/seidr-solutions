```python
def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        for _ in range(3, n + 1):
            a, b = b, a + b
        return b

if __name__ == "__main__":
    try:
        num = int(input("Enter the number: "))
        print(f"Fibonacci number at position {num} is {fibfib(num)}")
    except ValueError:
        print("Invalid input. Please enter an integer.")