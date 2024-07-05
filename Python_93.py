def encode(message):
   vowels = {
       "a": "A",
       "e": "E",
       "i": "I",
       "o": "O",
       "u": "U",
       "I": "?",
       " ": "",
       "d": "",
       "D": "" # Add this line to fix the error
   }
   encoded_message = ""
   for char in message:
       if char.isalpha():
           if char.islower():
               encoded_char = vowels[char]
           elif char.isupper():
               encoded_char = vowels[char].lower()
       else:
           if char not in vowels:
               encoded_message += char
   return encoded_message