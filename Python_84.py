import base64
import sys


def solve():
    while True:
        try:
            num = int(input("Enter an integer: "))
            if num < 0:
                encoded_str = "-" + base64.b64encode(
                    str(abs(num)).encode("utf-8")
                ).decode("ascii").upper().replace("+", "-")
            else:
                encoded_str = (
                    base64.b64encode(str(num).encode("utf-8"))
                    .decode("ascii")
                    .upper()
                    .replace("+", "-")
                )
        except ValueError:
            try:
                str_num = input("Enter a string: ")
                encoded_str = (
                    base64.b64encode(str_num.encode("utf-8"))
                    .decode("ascii")
                    .upper()
                    .replace("+", "-")
                )
            except Exception as e:
                print(f"Error occurred: {str(e)}")
                return None
        else:
            print(encoded_str)