input_str = input("Enter a string: ").strip().lower()
if not input_str.isalpha() or len(input_str) % 3 != 0:
    print("Invalid input. Please enter a non-empty string with a length multiple of 3 containing only alphabetical characters.")
else:
    def process_string(input_str: str) -> str:
        result = ""
        for i in range(0, len(input_str)-2, 3):
            result += input_str[i+1] + input_str[i+2] + input_str[i]
        return result

    output_str = process_string(input_str)
    print(output_str)