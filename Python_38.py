try:
    input_string = input("Enter the input string: ").strip()
    result = decode_cyclic(input_string)
    print(result)
except Exception as e:
    print("Error:", e)