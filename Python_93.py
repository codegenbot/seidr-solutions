try:
    message = input("Enter message to encode (letters and spaces only): ")
    assert message.replace(
        " ", ""
    ).isalpha(), "Please enter alphabetic characters and spaces only. Try again."

    shift = input("Enter shift value: ")
    assert (
        shift.isdigit() and int(shift) >= 0
    ), "Please enter a non-negative integer value for shift. Try again"
    shift = int(shift)
except AssertionError as e:
    print(e)
except Exception:
    print("Program did not receive expected input")