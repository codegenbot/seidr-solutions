int counter = 0;
        for(auto str : lst) {
            for(char c : str) {
                if(c == '(') {
                    counter++;
                } else {
                    if(counter <= 0) {
                        return "No";
                    }
                    counter--;
                }
            }
        }
        return (counter == 0) ? "Yes" : "No";
    }