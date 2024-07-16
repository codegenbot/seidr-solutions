try:
    input_text = raw_input("Enter text: ").strip()
    result = process_text(input_text)
    print(result)
except (KeyboardInterrupt, EOFError):
    print("Error reading input.")