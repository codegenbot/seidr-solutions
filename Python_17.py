input_string = input("Enter the music string: ")
while "|" not in input_string:
    input_string = input("Enter the music string: ")
input_string = input_string.strip().split("|")