input_list = list(
    map(int, input("Enter a space-separated list of integers: ").strip().split())
)
while len(input_list) == 0:
    input_list = list(
        map(int, input("Invalid input. Please enter a space-separated list of integers: ").strip().split())
    )
print(sum(input_list))