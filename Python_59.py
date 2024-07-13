```
def largest_prime_factor(n):
    i = n
    while i > 1:
        if n % i == 0:
            j = i
            while j % i == 0:
                j //= i
            if j == 1:
                return i
        i -= 1
    return n

def main():
    while True:
        num = input("Enter a number: ")
        if num.replace(".", "", 1).isdigit():
            n = int(num)
            print(largest_prime_factor(n))
            break
        print("Invalid input. Please enter an integer.")

if __name__ == "__main__":
    main()