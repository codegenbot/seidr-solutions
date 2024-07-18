try:
    input_text = input("Enter space-separated integers: ")
    if not input_text.strip():
        raise ValueError
    operations = [int(x) for x in input_text.split()]
    result = below_zero(operations)
    print(result)
except ValueError:
    print("No input provided.")