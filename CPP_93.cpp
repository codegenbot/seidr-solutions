string encode(string message){
    string encodedMessage = message;
    transform(encodedMessage.begin(), encodedMessage.end(), encodedMessage.begin(), 
              [](unsigned char c) {
                  if(isalpha(c)) {
                      if(islower(c)) {
                          return islower((char)(c+2)) ? (char)(c+2) : (char)(c-24);
                      }
                      else {
                          return isupper((char)(c+2)) ? (char)(c+2) : (char)(c-24);
                      }
                  }
                  return c;
              });
    return encodedMessage;
}