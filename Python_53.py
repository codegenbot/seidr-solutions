def main():
    pass_value = "pass"


while True:
    x = int(
        input("Enter first number: ")
        if input("Is this run for a pass (yes/no)? ").lower() == "yes"
        else None
    )

    if x is None:
        break

    y = int(input("Enter second number: "))

    def add(x: int, y: int):
        return x + y

    result = add(x, y)
    print(f"The sum of {x} and {y} is {result}")