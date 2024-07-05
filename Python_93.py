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
   }
   encoded_message = ""
   for char in message:
       if char.isalpha():
           encoded_char = vowels[char].lower()
       else:
           encoded_message += char
   return encoded_message