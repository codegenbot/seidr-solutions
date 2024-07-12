def main():
    while True:
        N = input("Please provide a binary number: ")
        if all(c in "01" for c in N):
            return bin(int(N, 2))[2:]
        print("Invalid Input. Please provide a binary number.")

if __name__ == "__main__":
    main()