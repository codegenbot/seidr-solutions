```
```
def digit_sum():
    n = int(input("Enter a number: "))
    return sum(int(i) for i in str(n))

def main():
    while True:
        try:
            print(digit_sum())
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

if __name__ == "__main__":
    main()
```