from typing import List, Any

def main():
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == "stop":
            break
        try:
            values.append(int(value))
        except ValueError:
            print("Invalid input. Please enter a valid integer or type 'stop' to finish.")
    filtered_values = [value for value in values if isinstance(value, int) and value % 2 == 0]
    print(filtered_values)

if __name__ == "__main__":
    main()