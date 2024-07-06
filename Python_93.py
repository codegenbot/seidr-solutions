
def encode(message):
   encoded_message = ""
   for char in message:
      if char.isalpha():
         if char.islower():
            encoded_char = chr(ord("A") + (ord(char) - ord("a")) % 26)
         elif char.isupper():
            encoded_char = chr(ord("a") + (ord(char) - ord("A")) % 26)
      else:
         encoded_message += char
   return encoded_message