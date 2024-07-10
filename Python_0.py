```
def main():
    numbers = []
    while True:
        nums = [float(x.strip().replace(",", ".")) for x in input("Enter numbers (comma-separated): ").strip().split(",")]
        threshold = float(input("Enter threshold: "))
        
        if all(num < 1000 for num in nums):
            break
        else:
            print("Error: Please enter numbers less than or equal to 999.")

    numbers.sort()
    return has_close_elements(numbers, threshold)

print(return main())