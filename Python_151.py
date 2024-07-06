
def get_numbers(prompt):
    numbers = list(map(int, input(prompt).split()))
    return numbers

def main():
    prompt = "Enter numbers separated by spaces: "
    numbers = get_numbers(prompt)
    print(numbers)

if __name__ == "__main__":
    main()