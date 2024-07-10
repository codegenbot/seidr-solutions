```
import re

def filter_integers():
    while True:
        user_input = input("Please enter a comma-separated list of values (separated by commas), or type 'exit' to quit: ").replace(" ", "")

        if user_input.lower() == "exit":
            break

        try:
            values = [int(val) for val in user_input.split(",") if re.match(r"^\d+$", val)]

            if any(not re.match(r"^\d+$", val) for val in values):
                print("Invalid input. Please enter a valid list of comma-separated integers.")
            else:
                if not values:
                    print("No values entered. Cannot calculate average and minimum.")
                elif len(values) < 2:
                    print(f"The integers from the input are: {values}")
                    if len(values) == 1:
                        print("Average Value is Not Applicable")
                        print(f"Minimum Value: {values[0]}")
                    else:
                        print(f"Minimum Value: {min(values)}")
                else:
                    avg_value = sum(values) / len(values)
                    min_value = min(values)

                    print(f"The integers from the input are: {values}")
                    print(f"Average Value: {avg_value:.2f}")
                    print(f"Minimum Value: {min_value}")
        except ValueError:
            print("Invalid input. Please enter a valid list of comma-separated integers.")