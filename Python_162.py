```
import hashlib


def string_to_md5():
    while True:
        text = input("Enter some text (or 'q' to quit): ").strip()
        if text.lower() == 'q':
            print('Goodbye!')
            return None
        elif not text: 
            print("Please enter some text.")
        else:
            md5_hash = hashlib.md5(text.encode()).hexdigest()
            while True:
                output = input(f"Enter 1 for {text} in lowercase, 2 for {text} in uppercase or 'q' to quit: ").strip().lower()
                if output == 'q':
                    print('Goodbye!')
                    return None
                elif output not in ['1', '2']:
                    print("Invalid choice. Please enter either 1 or 2.")
                else:
                    if output == '1':
                        return md5_hash.lower()
                    else:
                        return md5_hash.upper()


print(string_to_md5())