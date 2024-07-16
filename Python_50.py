try:
    input_str = input("Enter a string to decode: ").strip()
    result = decode_shift(input_str)
    print(result)
except Exception as e:
    print("Error occurred:", e)