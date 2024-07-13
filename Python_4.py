```
def main():
    while True:
        mean_absolute_deviation()
        response = input("Do you want to calculate again? (yes/no): ").lower()
        if response != "yes":
            break

if __name__ == "__main__":
    main()