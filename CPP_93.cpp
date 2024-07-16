string encode(string message) {
    string encodedMessage = message;
    
    transform(encodedMessage.begin(), encodedMessage.end(), encodedMessage.begin(), 
              [](unsigned char c) -> unsigned char { 
                  if (isalpha(c)) {
                      c = islower(c) ? toupper(c) : tolower(c);
                      if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                          c = c + 2;
                      }
                  }
                  return c;
              });
    
    return encodedMessage;
}