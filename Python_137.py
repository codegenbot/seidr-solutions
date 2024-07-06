input_str = (
    input(
        "Enter two numbers (integers or floats) with decimal points separated by commas: "
    )
    .replace(",", ".")
    .split()
)
num1 = float(input_str[0].replace(".", ""))
num2 = float(input_str[1].replace(".", ""))
print(compare_one(num1, num2))