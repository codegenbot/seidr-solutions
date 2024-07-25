input_str = input("Enter a string: ").strip()
if not input_str or len(input_str) % 3 != 0:
    print("Please enter a non-empty string with a length multiple of 3.")
    exit()
if not input_str.isalnum():
    print("Please enter a string with only alphanumeric characters.")
    exit()
else:
    def process_string(input_str: str) -> str:
        result = ""
        for i in range(0, len(input_str), 3):
            result += input_str[i+1] + input_str[i+2] + input_str[i]
        return result

    output_str = process_string(input_str)
    print(output_str)