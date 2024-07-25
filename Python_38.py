input_str = input("Enter a string: ").lower().strip()
while not input_str.isalnum() or len(input_str) % 3 != 0 or len(input_str) == 0:
    print("Invalid input. Please enter a non-empty string with a length multiple of 3 containing only alphanumeric characters.")
    input_str = input("Enter a string: ").lower().strip()

def process_string(input_str: str) -> str:
    result = ""
    for i in range(0, len(input_str) - 2, 3):
        result += input_str[i + 1] + input_str[i + 2] + input_str[i]
    return result

output_str = process_string(input_str)
print(output_str)