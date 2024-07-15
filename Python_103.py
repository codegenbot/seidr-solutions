Here is the modified code:

```
def rounded_avg(n, m):
    avg = (n + m) / 2
    return round(avg)

def main():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n != 0 and m != 0:
                result = rounded_avg(n, m)
                print(result)
                choice = input("Do you want to calculate the average? (1 for yes / any key to exit) ").lower()
                if choice == '1':
                    continue
                else:
                    print("Exiting the program. Goodbye!")
                    break
            else:
                print("Invalid input! Please enter integer values.")
        except ValueError:
            print("Invalid input! Please enter integers.")