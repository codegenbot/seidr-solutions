from typing import List


def below_zero() -> bool:
    temperatures = input("Enter temperatures separated by spaces: ").split()
    balance = 0
    for temp in temperatures:
        try:
            temperature = int(temp)
            if temperature < 0:
                return True
            else:
                balance += temperature
                if balance >= 0:
                    return False
        except ValueError:
            print("Invalid input. Please enter only numbers separated by spaces.")
    return True


print(below_zero())