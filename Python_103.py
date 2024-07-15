```
def main():
    n = int(input("Enter first number: "))
    m = int(input("Enter second number: "))
    print(rounded_avg(n, m))

def rounded_avg(a, b):
    return round((a + b) / 2)

main()