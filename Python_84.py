```
def solve():
    choice = int(input("Do you want to (1) Convert decimal to binary or (2) Convert binary to decimal? "))
    if choice == 1:
        N = int(input("Enter a number: "))
        print(bin(N)[2:])
    elif choice == 2:
        N = input("Enter a binary number: ")
        print(int(N, 2))

def main():
    solve()

if __name__ == "__main__":
    main()