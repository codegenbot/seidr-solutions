```
def main():
    choice = int(input("Do you want to (1) Convert decimal to binary or (2) Convert binary to decimal? "))
    if choice == 1:
        N = int(input("Enter a number: "))
        solve = bin(N)[2:]
    elif choice == 2:
        N = input("Enter a binary number: ")
        solve = oct(int(N, 2))[2:]
    else:
        solve = "Invalid choice. Please choose (1) or (2)."
    print(solve)
    else:
        print("Invalid choice. Please choose (1) or (2).")