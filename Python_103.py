```
def main():
    n = int(input("Enter first number: "))
    m = int(input("Enter second number: "))
    def rounded_avg(a, b):
        return round((a + b) / 2)
    print(rounded_avg(n, m))

main()