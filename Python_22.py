```
from typing import List, Any


def get_values() -> List[Any]:
    while True:
        try:
            values = input(
                "Enter a list of integers and/or strings separated by commas: "
            )
            values = [value.strip() for value in values.split(",")]
            print("Input received:", values)
            if all(
                value.isdigit()
                or (
                    value.replace(
                        ".",
                        "",
                    )
                    .replace(
                        "-",
                        "",
                    )
                    .isdigit()
                )
                for value in values
            ):
                return [
                    (
                        int(value)
                        if value.isdigit()
                        else (
                            float(value) if "." in value and "-" not in value else value
                        )
                    )
                    for value in values
                ]
        except ValueError as e:
            print(
                f"Invalid input. Please enter integers and/or strings separated by commas: {e}"
            )


def filter_integers():
    result = get_values()
    if result is not None:
        return result